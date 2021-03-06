/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaLibraryFetchController.h>

@protocol TVHKMediaCategoryTypesFetchControllerDelegate, OS_dispatch_queue, OS_dispatch_queue_serial;
@class NSSet, NSObject, NSMutableArray;

@interface TVHKMediaCategoryTypesFetchController : TVHKMediaLibraryFetchController {

	NSSet* _DMAPServerProtocols;
	id<TVHKMediaCategoryTypesFetchControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateDispatchQueue;
	NSMutableArray* _mutableMediaCategoryTypes;
	NSObject*<OS_dispatch_queue_serial> _accessQueue;

}

@property (nonatomic,readonly) NSMutableArray * mutableMediaCategoryTypes;                                   //@synthesize mutableMediaCategoryTypes=_mutableMediaCategoryTypes - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue_serial> accessQueue;                              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic,__weak) id<TVHKMediaCategoryTypesFetchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateDispatchQueue;                             //@synthesize delegateDispatchQueue=_delegateDispatchQueue - In the implementation block
-(id<TVHKMediaCategoryTypesFetchControllerDelegate>)delegate;
-(void)setDelegate:(id<TVHKMediaCategoryTypesFetchControllerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue_serial>)accessQueue;
-(void)_didCancel;
-(void)_notifyDelegateWithBlock:(/*^block*/id)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateDispatchQueue;
-(void)setDelegateDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)DMAPServerProtocols;
-(id)_didCompleteQueryOperation:(id)arg1 ;
-(id)_queryOperationForQueryReason:(long long)arg1 withUserInfo:(id)arg2 ;
-(NSMutableArray *)mutableMediaCategoryTypes;
-(void)_handleInitialFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2 ;
-(void)_handleContentsChangeFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2 ;
-(void)_notifyFetchDidCompleteWithResult:(id)arg1 ;
-(void)_notifyFetchDidFailWithError:(id)arg1 ;
@end

