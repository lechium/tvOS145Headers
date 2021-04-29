/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXDisplayAssetFetchResult;
@class NSMutableIndexSet;

@interface PXPreheatInfo : NSObject {

	NSMutableIndexSet* _preheatedIndexes;
	id<PXDisplayAssetFetchResult> _fetchResult;
	long long _preheatOrigin;
	long long _cachedBytes;

}

@property (nonatomic,readonly) NSMutableIndexSet * preheatedIndexes;                   //@synthesize preheatedIndexes=_preheatedIndexes - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> fetchResult;              //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) long long preheatOrigin;                                //@synthesize preheatOrigin=_preheatOrigin - In the implementation block
@property (nonatomic,readonly) BOOL finished; 
@property (assign,nonatomic) long long cachedBytes;                                    //@synthesize cachedBytes=_cachedBytes - In the implementation block
-(BOOL)finished;
-(id<PXDisplayAssetFetchResult>)fetchResult;
-(void)markAsFinished;
-(id)initWithFetchResult:(id)arg1 origin:(long long)arg2 ;
-(NSMutableIndexSet *)preheatedIndexes;
-(long long)preheatOrigin;
-(long long)cachedBytes;
-(void)setCachedBytes:(long long)arg1 ;
@end

