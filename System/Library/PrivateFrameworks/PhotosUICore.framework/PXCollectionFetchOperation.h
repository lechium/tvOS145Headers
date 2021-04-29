/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol PXCollectionFetchOperationDelegate;
@class PHFetchOptions, PHCollection, PHFetchResult, NSPredicate;

@interface PXCollectionFetchOperation : NSOperation {

	id<PXCollectionFetchOperationDelegate> _delegate;
	PHFetchOptions* _fetchOptions;
	PHCollection* _collection;
	PHFetchResult* _outputFetchResult;
	NSPredicate* _assetsFilterPredicate;

}

@property (nonatomic,retain) PHFetchResult * outputFetchResult;                                   //@synthesize outputFetchResult=_outputFetchResult - In the implementation block
@property (assign,nonatomic,__weak) id<PXCollectionFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHFetchOptions * fetchOptions;                                       //@synthesize fetchOptions=_fetchOptions - In the implementation block
@property (nonatomic,readonly) PHCollection * collection;                                         //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) NSPredicate * assetsFilterPredicate;                               //@synthesize assetsFilterPredicate=_assetsFilterPredicate - In the implementation block
+(id)fetchOperationWithCollection:(id)arg1 delegate:(id)arg2 ;
-(id)init;
-(id<PXCollectionFetchOperationDelegate>)delegate;
-(void)setDelegate:(id<PXCollectionFetchOperationDelegate>)arg1 ;
-(PHCollection *)collection;
-(void)main;
-(void)setFetchOptions:(PHFetchOptions *)arg1 ;
-(PHFetchOptions *)fetchOptions;
-(NSPredicate *)assetsFilterPredicate;
-(id)initWithCollection:(id)arg1 assetsFilterPredicate:(id)arg2 ;
-(void)handleBegin;
-(void)handleFinish;
-(PHFetchResult *)outputFetchResult;
-(void)setOutputFetchResult:(PHFetchResult *)arg1 ;
@end

