/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RTPersistenceMirroringMetricsDelegate <NSObject>
@required
-(void)mirroringManager:(id)arg1 mirroringRequest:(id)arg2 didFailWithError:(id)arg3;
-(void)mirroringManager:(id)arg1 mirroringRequestDidSucceed:(id)arg2;
-(void)mirroringManager:(id)arg1 exceededHistoryType:(unsigned long long)arg2 count:(unsigned long long)arg3 limit:(unsigned long long)arg4;

@end

