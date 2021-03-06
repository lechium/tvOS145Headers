/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUARP/CoreUARP-Structs.h>
#import <CoreUARP/UARPUploader.h>

@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface UARPUploaderUARP : UARPUploader {

	NSObject*<OS_os_log> _log;
	uarpControllerObj* _coreController;
	uarpControllerCallbacksObj* _coreCallbacks;
	uarpControllerAppleObj* _appleController;
	uarpPlatformOptionsObj _options;
	NSObject*<OS_dispatch_queue> _txQueue;
	NSObject*<OS_dispatch_source> _txWatchdogTimer;

}
-(id)init;
-(BOOL)setController:(id)arg1 ;
-(BOOL)pauseAssetTransfersForAccessory:(id)arg1 ;
-(BOOL)resumeAssetTransfersForAccessory:(id)arg1 ;
-(BOOL)recvDataFromAccessory:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)queryFirmwareUpdateResultForAccessory:(id)arg1 ;
-(BOOL)addAccessory:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAccessory:(id)arg1 error:(id*)arg2 ;
-(BOOL)offerAssetToAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3 ;
-(BOOL)applyStagedAssetsForAccessory:(id)arg1 error:(id*)arg2 ;
-(BOOL)rescindStagedAssetsForAccessory:(id)arg1 error:(id*)arg2 ;
-(BOOL)cancelAssetStagingForAccessory:(id)arg1 asset:(id)arg2 ;
-(BOOL)solicitDynamicAssetForAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3 ;
-(BOOL)offerDynamicAssetToAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3 ;
-(long long)queryProperty:(unsigned long long)arg1 forAccessory:(id)arg2 ;
-(unsigned)sendMessageToAccessory:(id)arg1 uarpMsg:(id)arg2 ;
-(void)handleTxWatchdogTimer;
-(unsigned)recvPersonalizationRequestForAccessory:(id)arg1 buffer:(AppleUARPPersonalizationRequired*)arg2 length:(unsigned)arg3 ;
-(unsigned)recvPersonalizationInfoResponseForAccessory:(id)arg1 buffer:(AppleUARPPersonalizationInfoResponse*)arg2 length:(unsigned)arg3 ;
-(unsigned)recvAppleAccessoryInfoForAccessory:(id)arg1 buffer:(UARPMsgAccessoryAppleInformationResponse*)arg2 length:(unsigned)arg3 ;
-(unsigned)requestBytesInRangeForAccessory:(id)arg1 asset:(id)arg2 bytes:(void*)arg3 length:(unsigned)arg4 offset:(unsigned)arg5 bytesCopied:(unsigned*)arg6 offsetUsed:(unsigned*)arg7 ;
-(void)cancelTxWatchdogTimer;
-(void)setTxWatchdogTimer;
-(void)processingComplete:(id)arg1 asset:(id)arg2 status:(unsigned short)arg3 ;
-(void)processingAck:(id)arg1 asset:(id)arg2 status:(unsigned short)arg3 ;
-(void)rescindStagedAssetsAck:(id)arg1 ;
-(void)updateInfo:(id)arg1 type:(unsigned)arg2 length:(unsigned)arg3 value:(char*)arg4 ;
-(void)applyStagedAssetStatus:(id)arg1 status:(unsigned short)arg2 ;
-(unsigned)recvVendorSpecificMessage:(unsigned short)arg1 forAccessory:(id)arg2 oui:(UARPOUI*)arg3 buffer:(char*)arg4 length:(unsigned)arg5 ;
-(unsigned)personalizeAsset:(uarpControllerAssetObj*)arg1 forAccessory:(id)arg2 ;
-(void)dynamicAssetOffered:(id)arg1 asset:(id)arg2 ;
-(void)dynamicAssetBytesResponded:(id)arg1 asset:(id)arg2 data:(id)arg3 offset:(unsigned long long)arg4 ;
-(void)dynamicAssetFullyTransferred:(id)arg1 asset:(id)arg2 ;
-(void)versionDiscoveryResponse:(id)arg1 protocolVersion:(unsigned short)arg2 ;
@end

