/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface C3DBinding : NSObject {

	id sourceObject;
	NSString* keyPathSrc;
	NSString* keyPathDst;
	NSDictionary* options;

}

@property (nonatomic,retain) id sourceObject; 
@property (nonatomic,retain) NSString * keyPathSrc; 
@property (nonatomic,retain) NSString * keyPathDst; 
@property (nonatomic,retain) NSDictionary * options; 
-(void)dealloc;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)sourceObject;
-(void)setSourceObject:(id)arg1 ;
-(void)setKeyPathDst:(NSString *)arg1 ;
-(void)setKeyPathSrc:(NSString *)arg1 ;
-(NSString *)keyPathSrc;
-(NSString *)keyPathDst;
@end

