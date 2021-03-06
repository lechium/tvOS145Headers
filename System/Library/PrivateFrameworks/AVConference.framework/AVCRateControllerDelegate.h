/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVCRateControllerDelegate <NSObject>
@optional
-(int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;

@required
-(void)rateController:(void*)arg1 targetBitrateDidChange:(unsigned)arg2 rateChangeCounter:(unsigned)arg3;

@end

