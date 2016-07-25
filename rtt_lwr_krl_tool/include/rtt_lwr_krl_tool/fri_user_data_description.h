#ifndef __FRI_USER_DATA_DESCRIPTION__
#define __FRI_USER_DATA_DESCRIPTION__

namespace krl{

enum FRI_BOOL_DATA_DESCRIPTION
{
    KRL_LOOP_REQUESTED = 0,
    KRL_ACK,
    SET_CONTROL_MODE,
    SET_TOOL,
    SET_BASE,
    PTP_CMD,
    LIN_CMD,
    STOP2,
    SET_VEL,
    A1_MASK,
    A2_MASK,
    E1_MASK,
    A3_MASK,
    A4_MASK,
    A5_MASK,
    A6_MASK
};

enum FRI_INT_DATA_DESCRIPTION
{
    FRI_STATE = 0,
    CONTROL_MODE,
    TOOL,
    BASE,
    FRI_CMD
};

enum FRI_COMMAND
{
    FRI_START = 0,
    FRI_STOP,
    FRI_CLOSE
};

enum FRI_REAL_DATA_DESCRIPTION
{
    REAL_EMPTY0 = 0,
    REAL_EMPTY1,
    REAL_EMPTY2,
    REAL_EMPTY3,
    REAL_EMPTY4,
    REAL_EMPTY5,
    REAL_EMPTY6,
    REAL_EMPTY7,
    VEL_PERCENT,
    A1,
    A2,
    E1,
    A3,
    A4,
    A5,
    A6
};

}
#endif
