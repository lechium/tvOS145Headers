//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioBuffer {
    unsigned int mNumberChannels;
    unsigned int mDataByteSize;
    void *mData;
};

struct AudioBufferList {
    unsigned int mNumberBuffers;
    struct AudioBuffer mBuffers[1];
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct BatchBeepCanceller;

struct CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float>>;

struct SmartSiriVolume;

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct pair<unsigned long long, float> {
    unsigned long long first;
    float second;
};

struct unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller>> {
    struct __compressed_pair<BatchBeepCanceller *, std::__1::default_delete<BatchBeepCanceller>> {
        struct BatchBeepCanceller *__value_;
    } __ptr_;
};

struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> {
    struct __compressed_pair<SmartSiriVolume *, std::__1::default_delete<SmartSiriVolume>> {
        struct SmartSiriVolume *__value_;
    } __ptr_;
};

struct unique_ptr<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float>>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float>>>> {
    struct __compressed_pair<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float>>*, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float>>>> {
        struct CSAudioCircularBufferImpl<std::__1::pair<unsigned long long, float>> *__value_;
    } __ptr_;
};

struct vector<double, std::__1::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *__value_;
    } __end_cap_;
};

struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

struct vector<short, std::__1::allocator<short>> {
    short *__begin_;
    short *__end_;
    struct __compressed_pair<short *, std::__1::allocator<short>> {
        short *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct pair<unsigned long long, float> {
    unsigned long long first;
    float second;
} pair_c326349a;
