/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VUIMediaEntityType : NSObject <NSCopying> {

	BOOL _rental;
	unsigned long long _subtype;
	unsigned long long _mediaCategoryType;
	unsigned long long _mediaCollectionType;

}

@property (assign,nonatomic) unsigned long long subtype;                          //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCategoryType;                //@synthesize mediaCategoryType=_mediaCategoryType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCollectionType;              //@synthesize mediaCollectionType=_mediaCollectionType - In the implementation block
@property (assign,getter=isRental,nonatomic) BOOL rental;                         //@synthesize rental=_rental - In the implementation block
+(id)episode;
+(id)season;
+(id)movie;
+(id)show;
+(id)homeVideo;
+(id)movieRental;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)subtype;
-(void)setSubtype:(unsigned long long)arg1 ;
-(void)setRental:(BOOL)arg1 ;
-(BOOL)isRental;
-(id)stringDescription;
-(unsigned long long)mediaCategoryType;
-(void)setMediaCategoryType:(unsigned long long)arg1 ;
-(id)_initWithMediaItemCategoryType:(unsigned long long)arg1 isRental:(BOOL)arg2 ;
-(id)_initWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2 ;
-(unsigned long long)mediaCollectionType;
-(void)setMediaCollectionType:(unsigned long long)arg1 ;
@end

