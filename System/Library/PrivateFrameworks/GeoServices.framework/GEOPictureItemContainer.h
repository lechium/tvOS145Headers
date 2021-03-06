/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOPictureItemContainer.h>
@class NSArray;


@protocol GEOPictureItemContainer
@property (nonatomic,readonly) NSArray * pictureItems; 
@property (nonatomic,readonly) BOOL allowFullScreenPhoto; 
@required
-(NSArray *)pictureItems;
-(BOOL)allowFullScreenPhoto;

@end


@class NSArray;

@interface GEOPictureItemContainer : NSObject <GEOPictureItemContainer> {

	NSArray* _pictureItems;
	BOOL _allowFullScreenPhoto;

}

@property (nonatomic,readonly) NSArray * pictureItems;                 //@synthesize pictureItems=_pictureItems - In the implementation block
@property (nonatomic,readonly) BOOL allowFullScreenPhoto;              //@synthesize allowFullScreenPhoto=_allowFullScreenPhoto - In the implementation block
-(id)init;
-(id)initWithPictureItemContainer:(id)arg1 ;
-(NSArray *)pictureItems;
-(BOOL)allowFullScreenPhoto;
-(id)initWithPictureItems:(id)arg1 allowFullScreenPhoto:(BOOL)arg2 ;
@end

