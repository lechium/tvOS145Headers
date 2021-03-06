/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet, NSDictionary;

@interface VUIMediaCategory : NSObject {

	unsigned long long _type;
	NSSet* _supportedMediaCollectionTypes;
	NSDictionary* _supportedChildMediaCollectionTypes;

}

@property (assign,nonatomic) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSSet * supportedMediaCollectionTypes;                          //@synthesize supportedMediaCollectionTypes=_supportedMediaCollectionTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * supportedChildMediaCollectionTypes;              //@synthesize supportedChildMediaCollectionTypes=_supportedChildMediaCollectionTypes - In the implementation block
+(id)mediaCatgeoryForType:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)_initWithType:(unsigned long long)arg1 ;
-(NSSet *)supportedMediaCollectionTypes;
-(void)setSupportedMediaCollectionTypes:(NSSet *)arg1 ;
-(void)setSupportedChildMediaCollectionTypes:(NSDictionary *)arg1 ;
-(NSDictionary *)supportedChildMediaCollectionTypes;
@end

