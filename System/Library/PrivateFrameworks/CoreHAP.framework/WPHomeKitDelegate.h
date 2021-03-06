/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WPHomeKitDelegate <NSObject>
@optional
-(void)homeKit:(id)arg1 failedToStartScanningWithError:(id)arg2 forType:(long long)arg3;
-(void)homeKit:(id)arg1 allowDuplicate:(BOOL)arg2;
-(void)homeKitStartedScanning:(id)arg1 forType:(long long)arg2;
-(void)homeKitStoppedScanning:(id)arg1 forType:(long long)arg2;

@required
-(void)homeKitDidUpdateState:(id)arg1;
-(void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4 type:(long long)arg5;

@end

