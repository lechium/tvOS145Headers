/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, MPSlide, MPFrameInternal, NSString;

@interface MPFrame : NSObject <NSCopying> {

	NSMutableDictionary* _attributes;
	MPSlide* _parentSlide;
	MPFrameInternal* _internal;

}

@property (nonatomic,copy) NSString * frameID; 
@property (nonatomic,copy) NSString * presetID; 
+(id)frameWithFrameID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)dump;
-(NSString *)frameID;
-(id)parentDocument;
-(id)fullDebugLog;
-(void)copyStruct:(id)arg1 ;
-(NSString *)presetID;
-(void)setPresetID:(NSString *)arg1 ;
-(void)setFrameID:(NSString *)arg1 ;
-(id)initWithFrameID:(id)arg1 ;
-(void)setFrameAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)frameAttributes;
-(id)frameAttributeForKey:(id)arg1 ;
-(id)parentSlide;
-(void)setParentSlide:(id)arg1 ;
@end

