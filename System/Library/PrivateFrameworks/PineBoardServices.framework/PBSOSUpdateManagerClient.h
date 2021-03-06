/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PBSOSUpdateServiceDelegate.h>

@protocol PBSOSUpdateManagerClientDelegate;
@class NSString;

@interface PBSOSUpdateManagerClient : NSObject <PBSOSUpdateServiceDelegate> {

	id<PBSOSUpdateManagerClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PBSOSUpdateManagerClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PBSOSUpdateManagerClientDelegate>)delegate;
-(void)setDelegate:(id<PBSOSUpdateManagerClientDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)startDownload:(/*^block*/id)arg1 ;
-(void)cancelDownload:(/*^block*/id)arg1 ;
-(void)pauseDownload:(/*^block*/id)arg1 ;
-(void)resumeDownload:(/*^block*/id)arg1 ;
-(void)isDownloading:(/*^block*/id)arg1 ;
-(void)isUpdate:(id)arg1 readyForInstallation:(/*^block*/id)arg2 ;
-(void)currentDownload:(/*^block*/id)arg1 ;
-(void)purgeDownload:(/*^block*/id)arg1 ;
-(void)installUpdate:(id)arg1 withOptions:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)osUpdateServiceDidStartCheckWithData:(id)arg1 ;
-(void)osUpdateServiceDidFinishCheckWithData:(id)arg1 ;
-(void)osUpdateServiceDidStartDownloadWithData:(id)arg1 ;
-(void)osUpdateServiceDidUpdateDownloadProgressWithData:(id)arg1 ;
-(void)osUpdateServiceDidFinishDownloadWithData:(id)arg1 ;
-(void)osUpdateServiceDidStartRedownloadWithData:(id)arg1 ;
-(void)osUpdateServiceDidStartApplyWithData:(id)arg1 ;
-(void)osUpdateServiceDidUpdateApplyProgressWithData:(id)arg1 ;
-(void)osUpdateServiceDidEncounterSlowUpdateWithData:(id)arg1 ;
-(void)osUpdateServiceDidFinishApplyWithData:(id)arg1 ;
-(void)isScanning:(/*^block*/id)arg1 ;
-(void)scanForUpdates:(id)arg1 withResult:(/*^block*/id)arg2 ;
@end

