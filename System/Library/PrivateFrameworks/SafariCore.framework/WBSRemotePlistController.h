/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, WBSRemotePlistSnapshot, WBSRemotePlistControllerDelegate;
@class NSObject, NSURL, NSString, WBSConfigurationDownloader, NSTimer;

@interface WBSRemotePlistController : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _diskWriteQueue;
	NSURL* _builtInListURL;
	NSURL* _downloadsDirectoryURL;
	NSString* _resourceName;
	NSString* _resourceVersion;
	NSString* _updateDateDefaultsKey;
	Class _snapshotClass;
	Class _snapshotTransformerClass;
	double _updateInterval;
	id<WBSRemotePlistSnapshot> _currentSnapshot;
	WBSConfigurationDownloader* _configurationDownloader;
	NSTimer* _updateTimer;
	BOOL _shouldAttemptToUpdateConfiguration;
	BOOL _shouldAttemptToDownloadConfiguration;
	id<WBSRemotePlistControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSRemotePlistControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldAttemptToUpdateConfiguration;                           //@synthesize shouldAttemptToUpdateConfiguration=_shouldAttemptToUpdateConfiguration - In the implementation block
@property (assign,nonatomic) BOOL shouldAttemptToDownloadConfiguration;                         //@synthesize shouldAttemptToDownloadConfiguration=_shouldAttemptToDownloadConfiguration - In the implementation block
+(id)new;
-(id)init;
-(void)dealloc;
-(id<WBSRemotePlistControllerDelegate>)delegate;
-(void)setDelegate:(id<WBSRemotePlistControllerDelegate>)arg1 ;
-(id)initWithBuiltInListURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6 snapshotClass:(Class)arg7 snapshotTransformerClass:(Class)arg8 ;
-(void)setShouldAttemptToDownloadConfiguration:(BOOL)arg1 ;
-(void)accessSnapshotLoadingItIfNeeded:(/*^block*/id)arg1 ;
-(void)prepareForTermination;
-(void)accessCurrentSnapshot:(/*^block*/id)arg1 ;
-(BOOL)shouldAttemptToDownloadConfiguration;
-(void)_resetUpdateTimer;
-(void)_updateWhitelistIfNecessary;
-(id)_lastConfigurationUpdateAttemptDate;
-(BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg1 ;
-(id)_downloadedListResourceName;
-(void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
-(void)_didLoadSnapshot:(id)arg1 ;
-(id)_urlOfDownloadedList;
-(void)_writeConfigurationData:(id)arg1 ;
-(void)_loadDownloadedSnapshotIfNeeded;
-(void)_loadBuiltInSnapshotIfNeeded;
-(void)setShouldAttemptToUpdateConfiguration:(BOOL)arg1 ;
-(BOOL)shouldAttemptToUpdateConfiguration;
@end

