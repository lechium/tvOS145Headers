/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue, PXAssetCountObserverDelegate;
@class PHPhotoLibrary, NSObject, PHFetchResult, NSString;

@interface PXAssetCountObserver : NSObject <PXPhotoLibraryUIChangeObserver> {

	PHPhotoLibrary* _photoLibrary;
	unsigned long long _numberOfAssets;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<PXAssetCountObserverDelegate> _delegate;
	PHFetchResult* _fetchResult;

}

@property (nonatomic,retain) PHFetchResult * fetchResult;                                   //@synthesize fetchResult=_fetchResult - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAssets;                             //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (assign,nonatomic,__weak) id<PXAssetCountObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXAssetCountObserverDelegate>)delegate;
-(void)setDelegate:(id<PXAssetCountObserverDelegate>)arg1 ;
-(PHFetchResult *)fetchResult;
-(unsigned long long)numberOfAssets;
-(id)_fetchOptions;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 qosClass:(unsigned)arg2 ;
-(void)observeReferencedAssets;
-(void)observeInternalFetchPredicate:(id)arg1 ;
-(void)_serialQueue_observeReferencedAssets;
-(void)_serialQueue_observeInternalFetchPredicate:(id)arg1 ;
-(void)setNumberOfAssets:(unsigned long long)arg1 ;
@end

