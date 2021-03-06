//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface APSConnectionHistory : NSObject
{
    double _highQualityThresholdConnectedTime;	// 8 = 0x8
    double _lowQualityThresholdConnectedTime;	// 16 = 0x10
    long long _connectionQuality[2];	// 24 = 0x18
    NSMutableArray *_connectionHistory[2];	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000148d4
@property(nonatomic) double lowQualityThresholdConnectedTime; // @synthesize lowQualityThresholdConnectedTime=_lowQualityThresholdConnectedTime;
@property(nonatomic) double highQualityThresholdConnectedTime; // @synthesize highQualityThresholdConnectedTime=_highQualityThresholdConnectedTime;
- (id)connectionHistoryOnInterface:(long long)arg1;	// IMP=0x00000001000147bc
- (double)connectedTimeInPastOneDayOnInterface:(long long)arg1;	// IMP=0x0000000100014304
- (void)adjustQualityOfConnectionOnInterface:(long long)arg1;	// IMP=0x0000000100014148
- (long long)connectionQualityOnInterface:(long long)arg1;	// IMP=0x0000000100014054
- (void)noteDisconnectOnInterface:(long long)arg1;	// IMP=0x0000000100013e70
- (void)noteNewConnectionOnInterface:(long long)arg1;	// IMP=0x0000000100013cf0
- (id)init;	// IMP=0x0000000100013c68

@end

