/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXLayoutPerformer;
@interface PXLayoutPerformerCacheEntry : NSObject {

	id<PXLayoutPerformer> _performer;
	unsigned long long _reentryCount;

}

@property (nonatomic,retain) id<PXLayoutPerformer> performer;              //@synthesize performer=_performer - In the implementation block
@property (assign,nonatomic) unsigned long long reentryCount;              //@synthesize reentryCount=_reentryCount - In the implementation block
-(id<PXLayoutPerformer>)performer;
-(void)setPerformer:(id<PXLayoutPerformer>)arg1 ;
-(unsigned long long)reentryCount;
-(void)setReentryCount:(unsigned long long)arg1 ;
@end

