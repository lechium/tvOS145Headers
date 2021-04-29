/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CPLRUDictionary, NSMapTable;

@interface MPStoreItemMetadataCache : NSObject {

	CPLRUDictionary* _itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
	NSMapTable* _itemIdentifierToCompositeStoreItemMetadataMapTable;

}

@property (nonatomic,readonly) long long count; 
-(long long)count;
-(id)initWithCacheSize:(long long)arg1 ;
-(id)addMetadata:(id)arg1 forItemIdentifier:(id)arg2 ;
-(id)metadataForItemIdentifier:(id)arg1 ;
-(id)metadataForItemIdentifier:(id)arg1 ignoreExpiration:(BOOL)arg2 ;
-(void)removeExpiredMetadata;
@end

