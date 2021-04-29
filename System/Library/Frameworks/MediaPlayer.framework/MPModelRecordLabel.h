/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelRecordLabel : MPModelObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * shortDescriptionText; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy) id editorialArtworkCatalogBlock; 
+(id)__artworkCatalogBlock_KEY;
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)__descriptionText_KEY;
+(id)__name_KEY;
+(id)__shortDescriptionText_KEY;
-(id)artworkCatalog;
-(id)editorialArtworkCatalog;
@end

