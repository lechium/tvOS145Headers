/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVCaptureDepthDataOutputDelegate <NSObject>
@optional
-(void)depthDataOutput:(id)arg1 didOutputDepthData:(id)arg2 timestamp:(SCD_Struct_AV0)arg3 connection:(id)arg4;
-(void)depthDataOutput:(id)arg1 didDropDepthData:(id)arg2 timestamp:(SCD_Struct_AV0)arg3 connection:(id)arg4 reason:(long long)arg5;

@end

