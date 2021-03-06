/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSITopAssetsResultDelegate, OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, NSArray;

@interface PSITopAssetsResult : NSObject {

	id<PSITopAssetsResultDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSArray* _assetUUIDs;
	const CFArrayRef _assetIds;

}

@property (nonatomic,retain) const CFArrayRef assetIds;                                   //@synthesize assetIds=_assetIds - In the implementation block
@property (assign,nonatomic,__weak) id<PSITopAssetsResultDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long assetMatchCount; 
@property (nonatomic,readonly) NSArray * assetUUIDs; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id<PSITopAssetsResultDelegate>)delegate;
-(void)setDelegate:(id<PSITopAssetsResultDelegate>)arg1 ;
-(const CFArrayRef)assetIds;
-(NSArray *)assetUUIDs;
-(unsigned long long)assetMatchCount;
-(void)fetchAssetUUIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAssetIds:(const CFArrayRef)arg1 ;
@end

