//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GEOAnalyticsPipelineQueueElem.h"

@class NSData, NSDate;

@interface GEOAnalyticsPipelineLogMsgQueueElem : GEOAnalyticsPipelineQueueElem
{
    int _logMsgType;	// 16 = 0x10
    int _handlingPolicyId;	// 20 = 0x14
    NSData *_logMsg;	// 24 = 0x18
    NSDate *_expireTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100021b48
@property(readonly, nonatomic) NSDate *expireTime; // @synthesize expireTime=_expireTime;
@property(readonly, nonatomic) NSData *logMsg; // @synthesize logMsg=_logMsg;
@property(readonly, nonatomic) int handlingPolicyId; // @synthesize handlingPolicyId=_handlingPolicyId;
@property(readonly, nonatomic) int logMsgType; // @synthesize logMsgType=_logMsgType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000219ac
- (unsigned long long)hash;	// IMP=0x0000000100021930
- (id)copy;	// IMP=0x0000000100021884
- (id)initWithType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 expireTime:(id)arg4 createTime:(id)arg5;	// IMP=0x000000010002177c

@end

