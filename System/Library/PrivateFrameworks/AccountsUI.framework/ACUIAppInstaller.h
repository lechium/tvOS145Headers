/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACUIAppInstallerDelegate;
@class ACUIAppDescription, NSDate, NSURL;

@interface ACUIAppInstaller : NSObject {

	ACUIAppDescription* _app;
	NSDate* _dateOfLastReachabilityCheck;
	BOOL _cachedReachabilityResult;
	NSDate* _dateOfLastInstallationCheck;
	BOOL _resultOfLastInstallationCheck;
	BOOL _needsAvailableInStoreCheck;
	BOOL _availableInStoreResult;
	NSURL* _publisherURL;
	id<ACUIAppInstallerDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isInstalled; 
@property (nonatomic,retain) NSURL * publisherURL;                                                    //@synthesize publisherURL=_publisherURL - In the implementation block
@property (nonatomic,readonly) BOOL isDownloadable; 
@property (nonatomic,readonly) BOOL requiresReachabilityCheckToDetermineDownloadability; 
@property (nonatomic,readonly) BOOL isAvailableInStore; 
@property (assign,nonatomic,__weak) id<ACUIAppInstallerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
+(id)currentStoreFront;
-(id<ACUIAppInstallerDelegate>)delegate;
-(void)setDelegate:(id<ACUIAppInstallerDelegate>)arg1 ;
-(void)start;
-(BOOL)isInstalled;
-(NSURL *)publisherURL;
-(BOOL)isDownloadable;
-(BOOL)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(BOOL)arg1 ;
-(void)_setCachedReachabilityResult:(BOOL)arg1 ;
-(BOOL)_isGreenTeaAvailable;
-(void)fetchDownloadability:(/*^block*/id)arg1 ;
-(void)_performReachabilityCheck:(/*^block*/id)arg1 ;
-(void)_setAvailableInStoreResult:(BOOL)arg1 ;
-(void)checkAvailabilityInStore:(/*^block*/id)arg1 ;
-(void)_performAvailabilityCheck:(/*^block*/id)arg1 ;
-(id)initForAppWithDescription:(id)arg1 ;
-(BOOL)requiresReachabilityCheckToDetermineDownloadability;
-(BOOL)isAvailableInStore;
-(void)setPublisherURL:(NSURL *)arg1 ;
@end

