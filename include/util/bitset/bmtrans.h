#ifndef BMTRANS__H__INCLUDED__
#define BMTRANS__H__INCLUDED__

/*
Copyright(c) 2002-2009 Anatoliy Kuznetsov(anatoliy_kuznetsov at yahoo.com)

Permission is hereby granted, free of charge, to any person 
obtaining a copy of this software and associated documentation 
files (the "Software"), to deal in the Software without restriction, 
including without limitation the rights to use, copy, modify, merge, 
publish, distribute, sublicense, and/or sell copies of the Software, 
and to permit persons to whom the Software is furnished to do so, 
subject to the following conditions:

The above copyright notice and this permission notice shall be included 
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR 
OTHER DEALINGS IN THE SOFTWARE.

For more information please visit:  http://bmagic.sourceforge.net

*/
#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4311 4312 4127)
#endif

namespace bm
{

/**
    Mini-matrix for bit transposition purposes
    @internal
*/
template<typename T, unsigned ROWS, unsigned COLS>
struct tmatrix
{
    typedef T value_type;
    
    T BM_ALIGN16 value[ROWS][COLS] BM_ALIGN16ATTR;

    enum params
    {
        n_rows = ROWS,
        n_columns = COLS
    };


    /// Row characteristics for transposed matrix
    struct rstat
    {
        unsigned               bit_count;
        unsigned               gap_count;
        bm::set_representation best_rep;
    };

    static unsigned rows() { return ROWS; }
    static unsigned cols() { return COLS; }

    const T* row(unsigned row_idx) const { return value[row_idx]; }
          T* row(unsigned row_idx)       { return value[row_idx]; }
};


/*!
    Bit array grabber - template specitialization for various basic types    
    @internal
*/
template<typename T, unsigned BPC>
struct bit_grabber
{
    static
    unsigned get(const T*, unsigned)
    {
        BM_ASSERT(0); return 0;
    }
};

template<>
struct bit_grabber<unsigned, 32>
{
    static
    unsigned get(const unsigned* arr, unsigned j)
    {
        return  (((arr[0] >> j) & 1) << 0) |
                (((arr[1] >> j) & 1) << 1) |
                (((arr[2] >> j) & 1) << 2) |
                (((arr[3] >> j) & 1) << 3) |
                (((arr[4] >> j) & 1) << 4) |
                (((arr[5] >> j) & 1) << 5) |
                (((arr[6] >> j) & 1) << 6) |
                (((arr[7] >> j) & 1) << 7) |
                (((arr[8] >> j) & 1) << 8) |
                (((arr[9] >> j) & 1) << 9) |
                (((arr[10]>> j) & 1) << 10)|
                (((arr[11]>> j) & 1) << 11)|
                (((arr[12]>> j) & 1) << 12)|
                (((arr[13]>> j) & 1) << 13)|
                (((arr[14]>> j) & 1) << 14)|
                (((arr[15]>> j) & 1) << 15)|
                (((arr[16]>> j) & 1) << 16)|
                (((arr[17]>> j) & 1) << 17)|
                (((arr[18]>> j) & 1) << 18)|
                (((arr[19]>> j) & 1) << 19)|
                (((arr[20]>> j) & 1) << 20)|
                (((arr[21]>> j) & 1) << 21)|
                (((arr[22]>> j) & 1) << 22)|
                (((arr[23]>> j) & 1) << 23)|
                (((arr[24]>> j) & 1) << 24)|
                (((arr[25]>> j) & 1) << 25)|
                (((arr[26]>> j) & 1) << 26)|
                (((arr[27]>> j) & 1) << 27)|
                (((arr[28]>> j) & 1) << 28)|
                (((arr[29]>> j) & 1) << 29)|
                (((arr[30]>> j) & 1) << 30)|
                (((arr[31]>> j) & 1) << 31);    
    }
};

template<>
struct bit_grabber<unsigned short, 16>
{
    static
    unsigned get(const unsigned short* arr, unsigned j)
    {
        return  (((arr[0] >> j) & 1) << 0) |
                (((arr[1] >> j) & 1) << 1) |
                (((arr[2] >> j) & 1) << 2) |
                (((arr[3] >> j) & 1) << 3) |
                (((arr[4] >> j) & 1) << 4) |
                (((arr[5] >> j) & 1) << 5) |
                (((arr[6] >> j) & 1) << 6) |
                (((arr[7] >> j) & 1) << 7) |
                (((arr[8] >> j) & 1) << 8) |
                (((arr[9] >> j) & 1) << 9) |
                (((arr[10]>> j) & 1) << 10)|
                (((arr[11]>> j) & 1) << 11)|
                (((arr[12]>> j) & 1) << 12)|
                (((arr[13]>> j) & 1) << 13)|
                (((arr[14]>> j) & 1) << 14)|
                (((arr[15]>> j) & 1) << 15);
    }
};


template<>
struct bit_grabber<unsigned char, 8>
{
    static
    unsigned get(const unsigned char* arr, unsigned j)
    {
        return  (((arr[0] >> j) & 1) << 0) |
                (((arr[1] >> j) & 1) << 1) |
                (((arr[2] >> j) & 1) << 2) |
                (((arr[3] >> j) & 1) << 3) |
                (((arr[4] >> j) & 1) << 4) |
                (((arr[5] >> j) & 1) << 5) |
                (((arr[6] >> j) & 1) << 6) |
                (((arr[7] >> j) & 1) << 7);
    }
};


/*!
    Bit transpose matrix grabber - template specitialization for various basic types    
    @internal
*/
template<typename T, unsigned BPC, unsigned BPS>
struct bit_trans_grabber
{
    static
    T get(const T  tmatrix[BPC][BPS], unsigned i, unsigned j)
    {
        T w = 0;
        
            // Next code hopes that compiler will completely
            // eliminate ifs (all conditions are known at compile time)
            //    ( typically C++ compilers are smart to do that)
            
            // 8-bit (minimum)
            w |=
                (((tmatrix[0][i] >> j) & 1) << 0) |
                (((tmatrix[1][i] >> j) & 1) << 1) |
                (((tmatrix[2][i] >> j) & 1) << 2) |
                (((tmatrix[3][i] >> j) & 1) << 3) |
                (((tmatrix[4][i] >> j) & 1) << 4) |
                (((tmatrix[5][i] >> j) & 1) << 5) |
                (((tmatrix[6][i] >> j) & 1) << 6) |
                (((tmatrix[7][i] >> j) & 1) << 7);
                
            // 16-bit
            if (BPC > 8) 
            {
                w |=
                (((tmatrix[8][i] >> j) & 1) << 8) |
                (((tmatrix[9][i] >> j) & 1) << 9) |
                (((tmatrix[10][i] >> j) & 1) << 10) |
                (((tmatrix[11][i] >> j) & 1) << 11) |
                (((tmatrix[12][i] >> j) & 1) << 12) |
                (((tmatrix[13][i] >> j) & 1) << 13) |
                (((tmatrix[14][i] >> j) & 1) << 14) |
                (((tmatrix[15][i] >> j) & 1) << 15);
            }
            
            // 32-bit
            if (BPC > 16)
            {
                w |= 
                (((tmatrix[16][i] >> j) & 1) << 16) |                
                (((tmatrix[17][i] >> j) & 1) << 17) |
                (((tmatrix[18][i] >> j) & 1) << 18) |
                (((tmatrix[19][i] >> j) & 1) << 19) |
                (((tmatrix[20][i] >> j) & 1) << 20) |
                (((tmatrix[21][i] >> j) & 1) << 21) |
                (((tmatrix[22][i] >> j) & 1) << 22) |
                (((tmatrix[23][i] >> j) & 1) << 23) |
                (((tmatrix[24][i] >> j) & 1) << 24) |
                (((tmatrix[25][i] >> j) & 1) << 25) |
                (((tmatrix[26][i] >> j) & 1) << 26) |
                (((tmatrix[27][i] >> j) & 1) << 27) |
                (((tmatrix[28][i] >> j) & 1) << 28) |
                (((tmatrix[29][i] >> j) & 1) << 29) |
                (((tmatrix[30][i] >> j) & 1) << 30) |
                (((tmatrix[31][i] >> j) & 1) << 31); 
            }   
        return w;
    }
};

/*
template<>
struct bit_trans_grabber<unsigned, 32, bm::set_block_plain_size>
{
    static
    unsigned get(const unsigned tmatrix[32][bm::set_block_plain_size], unsigned i, unsigned j)
    {
        return
                (((tmatrix[0][i] >> j) & 1) << 0) |
                (((tmatrix[1][i] >> j) & 1) << 1) |
                (((tmatrix[2][i] >> j) & 1) << 2) |
                (((tmatrix[3][i] >> j) & 1) << 3) |
                (((tmatrix[4][i] >> j) & 1) << 4) |
                (((tmatrix[5][i] >> j) & 1) << 5) |
                (((tmatrix[6][i] >> j) & 1) << 6) |
                (((tmatrix[7][i] >> j) & 1) << 7) |
                (((tmatrix[8][i] >> j) & 1) << 8) |
                (((tmatrix[9][i] >> j) & 1) << 9) |
                (((tmatrix[10][i] >> j) & 1) << 10) |
                (((tmatrix[11][i] >> j) & 1) << 11) |
                (((tmatrix[12][i] >> j) & 1) << 12) |
                (((tmatrix[13][i] >> j) & 1) << 13) |
                (((tmatrix[14][i] >> j) & 1) << 14) |
                (((tmatrix[15][i] >> j) & 1) << 15) |
                (((tmatrix[16][i] >> j) & 1) << 16) |
                (((tmatrix[17][i] >> j) & 1) << 17) |
                (((tmatrix[18][i] >> j) & 1) << 18) |
                (((tmatrix[19][i] >> j) & 1) << 19) |
                (((tmatrix[20][i] >> j) & 1) << 20) |
                (((tmatrix[21][i] >> j) & 1) << 21) |
                (((tmatrix[22][i] >> j) & 1) << 22) |
                (((tmatrix[23][i] >> j) & 1) << 23) |
                (((tmatrix[24][i] >> j) & 1) << 24) |
                (((tmatrix[25][i] >> j) & 1) << 25) |
                (((tmatrix[26][i] >> j) & 1) << 26) |
                (((tmatrix[27][i] >> j) & 1) << 27) |
                (((tmatrix[28][i] >> j) & 1) << 28) |
                (((tmatrix[29][i] >> j) & 1) << 29) |
                (((tmatrix[30][i] >> j) & 1) << 30) |
                (((tmatrix[31][i] >> j) & 1) << 31);    
    }
};
*/



/**
    Generic bit-array transposition function
    T - array type (any int)
    BPC - bit plain count
    BPS - bit plain size
    
    \param arr      - source array start
    \param arr_size - source array size
    \param tmatrix   - destination bit matrix
        
*/
template<typename T, unsigned BPC, unsigned BPS>
void vect_bit_transpose(const T* arr, 
                        unsigned arr_size,
                        T        tmatrix[BPC][BPS])
{
    BM_ASSERT(sizeof(T)*8 == BPC);

    unsigned col = 0;
    for (unsigned i = 0; i < arr_size; 
                         i+=BPC, arr+=BPC, 
                         ++col)
    {
        for (unsigned j = 0; j < BPC; ++j)
        {
            unsigned w = 
                bm::bit_grabber<T, BPC>::get(arr, j);
            T* row = tmatrix[j];
            row[col] = (T)w;
        } // for j
    } // for i
}


/**
    Restore bit array from the transposition matrix
    T - array type (any int)
    BPC - bit plain count
    BPS - bit plain size
    
    \param arr       - dest array
    \param tmatrix   - source bit-slice matrix
        
*/
template<typename T, unsigned BPC, unsigned BPS>
void vect_bit_trestore(const T  tmatrix[BPC][BPS], 
                             T* arr)
{
    unsigned col = 0;
    for (unsigned i = 0; i < BPS; ++i)
    {
        for (unsigned j = 0; j < BPC; ++j, ++col) 
        {
            arr[col] = 
                bm::bit_trans_grabber<T, BPC, BPS>::get(tmatrix, i, j);
        } // for j
    } // for i    
}



/*!
    \brief Compute pairwise Row x Row Humming distances on plains(rows) of 
           the transposed bit block
   \param tmatrix - bit-block transposition matrix (bit-plains)
   \param distance - pairwise NxN Humming distance matrix (diagonal is popcnt)

   @ingroup bitfunc
*/
template<typename T, unsigned BPC, unsigned BPS>
void tmatrix_distance(const T  tmatrix[BPC][BPS], 
                      unsigned distance[BPC][BPC])
{                      
    for (unsigned i = 0; i < BPC; ++i)
    {
        const T* r1 = tmatrix[i];
        const T* r1_end = r1 + BPS;
        distance[i][i] = 
            bm::bit_block_calc_count((bm::word_t*)r1, (bm::word_t*)r1_end);

        for (unsigned j = i + 1; j < BPC; ++j)
        {
            r1 = tmatrix[i];
            r1_end = r1 + BPS;
            unsigned count = 0;

            {
                const T* r2 = tmatrix[i];
                const T* r2_end = r2 + BPS;
                const bm::word_t* r3 = (bm::word_t*)(tmatrix[j]);
                do {
                    BM_INCWORD_BITCOUNT(count, r2[0] ^ r3[0]);
                    BM_INCWORD_BITCOUNT(count, r2[1] ^ r3[1]);
                    BM_INCWORD_BITCOUNT(count, r2[2] ^ r3[2]);
                    BM_INCWORD_BITCOUNT(count, r2[3] ^ r3[3]);
                    r2 += 4;
                    r3 += 4;
                } while (r2 < r2_end);
            }
            distance[i][j] = count;
        } // for j
    } // for i
}



const unsigned char ibpc_uncompr = 0; ///!< plain uncompressed
const unsigned char ibpc_all_zero= 1; ///!< plain ALL ZERO
const unsigned char ibpc_all_one = 2; ///!< plain ALL ONE
const unsigned char ibpc_equiv   = 3; ///!< plain is equal to plain M
const unsigned char ibpc_close   = 4; ///!< plain is close to plain M

const unsigned char ibpc_end = 8; ///!< ibpc limiter


/*!
    \brief Make a compression descriptor vector for bit-plains

    \param distance - pairwise distance matrix
    \param pc_vector - OUT compression descriptor vector
    <pre>
        pc_vector[] format:
            each element (pc_vector[i]) describes the plain compression:
                first 3 bits - compression code:
                    0 - plain uncompressed
                    1 - plain is ALL ZERO (000000...)
                    2 - plain is ALL ONE  (111111...)
                    3 - plain is equal to another plain J (5 high bits (max 31))
                    4 - plain is close (but not equal) to plain J
                next 5 bits - number of plain used as a XOR expression
                 ( compression codes: 3,4 )
    </pre>                    
    
    @ingroup bitfunc
*/
template<typename T, unsigned BPC, unsigned BPS>
void bit_iblock_make_pcv(
      const unsigned  distance[BPC][BPC],
      unsigned char*  pc_vector)
{
    BM_ASSERT(pc_vector);

    for (unsigned i = 0; i < BPC; ++i)
    {
        unsigned char pc = ibpc_uncompr; 
        unsigned row_bitcount = distance[i][i];
        
        const unsigned total_possible_max = sizeof(T)*8*BPS;
        switch (row_bitcount)
        {
        case 0:
            pc_vector[i] = ibpc_all_zero; 
            continue;
        case total_possible_max:
            pc_vector[i] = ibpc_all_one; 
            continue;
        }
        
        // Dense-populated set, leave it as is
        if (row_bitcount >  total_possible_max/2)
        {
            pc_vector[i] = ibpc_uncompr;
            continue;
        }
        
        // scan for the closest neighbor
        //
        unsigned rmin = ~0u;
        unsigned rmin_idx = 0;
        for (unsigned j = i + 1; j < BPC; ++j)
        {
            unsigned d = distance[i][j];
            if (d < rmin) // new minimum - closest plain
            {
                if (d == 0) // plain is complete duplicate of j
                {
                    pc = (unsigned char)(ibpc_equiv | (j << 3));
                    break;
                }
                rmin = d; rmin_idx = j;
            }
        } // for j
        
        if ((pc == 0) && rmin_idx && (rmin < row_bitcount)) // neighbor found
        {
            pc = (unsigned char)(ibpc_close | (rmin_idx << 3));
        }
        pc_vector[i] = pc;
    } // for i
}


/*!
    \brief Compute number of ibpc codes in pc_vector
*/
inline
void bit_iblock_pcv_stat(const unsigned char* BMRESTRICT pc_vector,
                         const unsigned char* BMRESTRICT pc_vector_end,
                         unsigned* BMRESTRICT pc_vector_stat
                        )
{
    BM_ASSERT(pc_vector_stat);
    // pc_vector_stat MUST be assigned to 0 before 
    do 
    {
        unsigned ibpc = *pc_vector & 7;
        ++(pc_vector_stat[ibpc]);
    } while (++pc_vector < pc_vector_end);
}



/**
    \brief Matrix reduction based on transformation pc vector
*/
inline
void bit_iblock_reduce(
    const unsigned  tmatrix[bm::set_block_plain_cnt][bm::set_block_plain_size],
    const unsigned char* BMRESTRICT pc_vector,
    const unsigned char* BMRESTRICT pc_vector_end,
    unsigned  tmatrix_out[bm::set_block_plain_cnt][bm::set_block_plain_size])
{
    ::memset(tmatrix_out, 0, bm::set_block_plain_cnt * sizeof(*tmatrix_out));
    
    unsigned row = 0;
    do 
    {
        unsigned ibpc = *pc_vector & 7;
        unsigned n_row = *pc_vector >> 3;
        
        switch(ibpc)
        {
        case bm::ibpc_uncompr:
            {
            const unsigned* r1 = tmatrix[row];
            unsigned* r_out = tmatrix_out[row];
            for (unsigned i = 0; i < bm::set_block_plain_size; ++i)
            {
                r_out[i] = r1[i];
            }
            }
            break;
        case bm::ibpc_all_zero:
            break;
        case bm::ibpc_all_one:
            break;
        case bm::ibpc_equiv:
            break;
        case bm::ibpc_close:
            {
            const unsigned* r1 = tmatrix[row];
            const unsigned* r2 = tmatrix[n_row];
            unsigned* r_out = tmatrix_out[row];
            for (unsigned i = 0; i < bm::set_block_plain_size; ++i)
            {
                r_out[i] = r1[i] ^ r2[i];
            } // for
            }
            break;
        default:
            BM_ASSERT(0);
            break;
        } // switch
        ++row;
    } while (++pc_vector < pc_vector_end);
    
}

/**
    \brief Transposed Matrix reduction based on transformation pc vector
*/
template<class TMatrix>
void tmatrix_reduce(TMatrix& tmatrix, 
                    const unsigned char* pc_vector,
                    const unsigned       effective_cols)
{
    BM_ASSERT(pc_vector);

    typedef typename TMatrix::value_type value_type;

    const unsigned char* pc_vector_end = pc_vector + tmatrix.rows();
    unsigned row = 0;
    unsigned cols = effective_cols ? effective_cols : tmatrix.cols();

    do
    {
        unsigned ibpc = *pc_vector & 7;        
        switch(ibpc)
        {
        case bm::ibpc_uncompr:
        case bm::ibpc_all_zero:
        case bm::ibpc_all_one:
        case bm::ibpc_equiv:
            break;
        case bm::ibpc_close:
            {
            unsigned n_row = *pc_vector >> 3;
            BM_ASSERT(n_row > row);

            value_type* r1 = tmatrix.row(row);
            const value_type* r2 = tmatrix.row(n_row);
            for (unsigned i = 0; i < cols; ++i)
            {
                r1[i] ^= r2[i];
            } // for
            }
            break;
        default:
            BM_ASSERT(0);
            break;
        } // switch
        ++row;
    } while (++pc_vector < pc_vector_end);
}

/**
    \brief Transposed Matrix restore based on transformation pc vector
*/
template<class TMatrix>
void tmatrix_restore(TMatrix& tmatrix, 
                     const unsigned char* pc_vector,
                     const unsigned effective_cols)
{
    BM_ASSERT(pc_vector);

    typedef typename TMatrix::value_type value_type;

    unsigned cols = effective_cols ? effective_cols : tmatrix.cols();
    for (int row = tmatrix.rows()-1; row >= 0; --row)
    {
        unsigned ibpc = pc_vector[row] & 7;  
        int n_row = pc_vector[row] >> 3;

        value_type* r1 = tmatrix.row(row);

        switch(ibpc)
        {
        case bm::ibpc_uncompr:
            break;
        case bm::ibpc_all_zero:
            for (unsigned i = 0; i < cols; ++i)
                r1[i] = 0;
             break;
        case bm::ibpc_all_one:
            for (unsigned i = 0; i < cols; ++i)
                r1[i] = (value_type)(~0);
            break;
        case bm::ibpc_equiv:
            {
            BM_ASSERT(n_row > row);
            const value_type* r2 = tmatrix.row(n_row);
            for (unsigned i = 0; i < cols; ++i)
                r1[i] = r2[i];
            }
            break;
        case bm::ibpc_close:
            {      
            BM_ASSERT(n_row > row);
            const value_type* r2 = tmatrix.row(n_row);
            for (unsigned i = 0; i < cols; ++i)
                r1[i] ^= r2[i];
            }
            break;
        default:
            BM_ASSERT(0);
            break;
        } // switch
    }  // for

}



/**
    \brief Copy GAP block body to bit block with DGap transformation 
    \internal
*/
template<typename GT>//, typename BT>
void gap_2_bitblock(const GT* BMRESTRICT gap_buf, 
                          GT* BMRESTRICT block, 
                          unsigned       block_size)
{
    GT* dgap_buf = block;
    GT* block_end = block + block_size;

    GT* dgap_end = gap_2_dgap<GT>(gap_buf, dgap_buf, false);
//    GT* block_end2 = (GT*) block_end;
    
    // zero the tail memory
    for ( ;dgap_end < block_end; ++dgap_end)
    {
        *dgap_end = 0;
    }
}

/**
    @brief Compute t-matrix rows statistics used for compression

    @param tmatrix - transposed matrix
    @param pc_vector - row content vector
    @param rstat - output row vector

    @internal
*/
template<class TMatrix>
void compute_tmatrix_rstat(const TMatrix& tmatrix, 
                           const unsigned char* pc_vector,
                           typename TMatrix::rstat* rstat,
                           unsigned effective_cols)
{
    BM_ASSERT(rstat);
    typedef typename TMatrix::value_type value_type;

    unsigned cols = effective_cols ? effective_cols : tmatrix.cols();
    //unsigned cols = tmatrix.cols();
    unsigned rows = tmatrix.rows();

    for (unsigned i = 0; i < rows; ++i)
    {
        unsigned ibpc = pc_vector[i] & 7;        
        switch(ibpc)
        {
        case bm::ibpc_all_zero:
        case bm::ibpc_all_one:
        case bm::ibpc_equiv:
            rstat[i].bit_count = rstat[i].gap_count = 0;
            rstat[i].best_rep = bm::set_bitset;
            break;
        case bm::ibpc_uncompr:
        case bm::ibpc_close:
            {
            const value_type* r1 = tmatrix.row(i);
            const value_type* r1_end = r1 + cols;
            // TODO: find how to deal with the potentially incorrect type-cast
            bm::bit_count_change32((bm::word_t*)r1, (bm::word_t*)r1_end, 
                                    &rstat[i].bit_count, &rstat[i].gap_count);

            const unsigned bitset_size = sizeof(value_type) * cols;
            const unsigned total_possible_max_bits = sizeof(value_type)*8*cols;

            rstat[i].best_rep = 
                bm::best_representation(rstat[i].bit_count,
                                        total_possible_max_bits,
                                        rstat[i].gap_count,
                                        bitset_size);

            }
            break;
        default:
            BM_ASSERT(0);
            break;
        } // switch

    } // for 
}



/**
    \brief Compute effective right column border of the t-matrix
    \internal
*/
template<typename TM>
unsigned find_effective_columns(const TM& tmatrix)
{
    // TODO: need optimization in order not to scan the whole space
    unsigned col = 1;
    for (unsigned i = 0; i < tmatrix.rows(); ++i)
    {
        const typename TM::value_type* row = tmatrix.value[i];
        for (unsigned j = 0; j < tmatrix.cols(); ++j)
        {
            if (row[j] != 0 && j > col)
            {
                col = j;
            }
        }
    }
    return col;
}


/**
    \brief Bit-plain splicing of a GAP block
    
    GT - gap word type
    BT - block word type
    BLOCK_SIZE - bit block size in words (works as a transposition basis)
    
    @internal
*/
template<typename GT, typename BT, unsigned BLOCK_SIZE>
class gap_transpose_engine
{
public:
    /// cryptic calculation of equivalent size for the transpose matrix
    /// based on BLOCK_SIZE and sizeof(GT)(16)
    ///
    /// matrix[size_of_gap*8][(Size_block_in_bytes / size_of_gap) / number_of_planes)] 
    typedef 
    tmatrix<GT, sizeof(GT)*8, 
                (((BLOCK_SIZE * sizeof(unsigned)) / (sizeof(GT))) / (sizeof(GT) * 8))>
                tmatrix_type;
                
    gap_transpose_engine() : eff_cols_(0)
    {}            
    
    /// Transpose GAP block through a temp. block of aligned(!) memory
    /// 
    void transpose(const GT* BMRESTRICT gap_buf)
    {
        const unsigned arr_size = BLOCK_SIZE * sizeof(unsigned) / sizeof(GT);

        BM_ASSERT(sizeof(tmatrix_.value) == tmatrix_type::n_columns * 
                                            tmatrix_type::n_rows * sizeof(GT));
        // load all GAP as D-GAP(but not head word) into aligned bit-block
        gap_2_bitblock(gap_buf, tmp_gap_block_, BLOCK_SIZE * 2);
        
        // transpose
        vect_bit_transpose<GT, tmatrix_type::n_rows, tmatrix_type::n_columns>
                           (tmp_gap_block_, arr_size, tmatrix_.value);

        // calculate number of non-zero columns
        eff_cols_ = find_effective_columns(tmatrix_);        
    }

	/// Transpose array of shorts
	///
	void transpose(const GT* BMRESTRICT garr,
		           unsigned garr_size)
	{
		BM_ASSERT(garr_size);

		bit_block_set(tmp_gap_block_, 0);
		::memcpy(tmp_gap_block_, garr, sizeof(GT)*garr_size);

        const unsigned arr_size = BLOCK_SIZE * sizeof(unsigned) / sizeof(GT);
        BM_ASSERT(sizeof(tmatrix_.value) == tmatrix_type::n_columns * 
                                            tmatrix_type::n_rows * sizeof(GT));
        // transpose
        vect_bit_transpose<GT, tmatrix_type::n_rows, tmatrix_type::n_columns>
                           (tmp_gap_block_, arr_size, tmatrix_.value);

        // calculate number of non-zero columns
        eff_cols_ = find_effective_columns(tmatrix_);        

	}

    void compute_distance_matrix()
    {
        tmatrix_distance<typename tmatrix_type::value_type, 
                         tmatrix_type::n_rows, tmatrix_type::n_columns>
                         (tmatrix_.value, distance_);

        // make compression descriptor vector and statistics vector
        bit_iblock_make_pcv<unsigned char, 
                            tmatrix_type::n_rows, tmatrix_type::n_columns>
                            (distance_, pc_vector_);

        bit_iblock_pcv_stat(pc_vector_, 
                            pc_vector_ + tmatrix_type::n_rows, 
                            pc_vector_stat_);
    }

    void reduce()
    {
        tmatrix_reduce(tmatrix_, pc_vector_, eff_cols_);
        compute_tmatrix_rstat(tmatrix_, pc_vector_, rstat_vector_, eff_cols_);
    }

    void restore()
    {
        tmatrix_restore(tmatrix_, pc_vector_, eff_cols_);
    }
    
    
    /// Restore GAP block from the transposed matrix
    ///
    void trestore(GT             gap_head, 
                  GT* BMRESTRICT gap_buf)
    {
        BM_ASSERT(sizeof(tmatrix_.value) == tmatrix_type::n_columns * 
                                            tmatrix_type::n_rows * sizeof(GT));
  
        // restore into a temp buffer
        GT* gap_tmp = tmp_gap_block_;
       
        vect_bit_trestore<GT, tmatrix_type::n_rows, tmatrix_type::n_columns>(tmatrix_.value, gap_tmp);
        
        // D-Gap to GAP block recalculation
        gap_tmp = tmp_gap_block_;
        dgap_2_gap<GT>(gap_tmp, gap_buf, gap_head);
    }
    
public:
//    GT            gap_head_;
    tmatrix_type                  tmatrix_;    
    unsigned                      eff_cols_;
    unsigned                      distance_[tmatrix_type::n_rows][tmatrix_type::n_rows];
    unsigned char                 pc_vector_[tmatrix_type::n_rows];
    unsigned                      pc_vector_stat_[bm::ibpc_end];
    typename tmatrix_type::rstat  rstat_vector_[tmatrix_type::n_rows];

    GT  BM_ALIGN16                tmp_gap_block_[BLOCK_SIZE*2] BM_ALIGN16ATTR;
};


} // namespace bm

#ifdef _MSC_VER
#pragma warning( pop )
#endif


#endif
