/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSExtension, NSObject, NSString;

@interface TVPhotoSource : NSObject {

	NSExtension* _extension;
	NSObject*<OS_dispatch_queue> _extensionRequestQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> extensionRequestQueue;              //@synthesize extensionRequestQueue=_extensionRequestQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceName; 
@property (nonatomic,copy,readonly) NSString * sourceIdentifier; 
-(id)description;
-(id)init;
-(NSString *)sourceIdentifier;
-(NSString *)sourceName;
-(void)fetchCollectionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performWithExtensionProxy:(/*^block*/id)arg1 ;
-(id)_initWithExtension:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)extensionRequestQueue;
@end

