/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitUI/PassKitUI-Structs.h>
@class NSString, PKPass, NSArray;

@interface PKEditPendingCacheRequest : NSObject {

	BOOL _fullPass;
	BOOL _stacked;
	NSString* _cacheKey;
	PKPass* _pass;
	long long _priority;
	NSArray* _completionHandlers;
	CGSize _imageSize;

}

@property (nonatomic,retain) NSString * cacheKey;                       //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,retain) PKPass * pass;                             //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) BOOL fullPass;                             //@synthesize fullPass=_fullPass - In the implementation block
@property (assign,nonatomic) BOOL stacked;                              //@synthesize stacked=_stacked - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                          //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) long long priority;                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(CGSize)imageSize;
-(NSString *)cacheKey;
-(PKPass *)pass;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setCacheKey:(NSString *)arg1 ;
-(NSArray *)completionHandlers;
-(void)setCompletionHandlers:(NSArray *)arg1 ;
-(void)setPass:(PKPass *)arg1 ;
-(BOOL)fullPass;
-(void)setFullPass:(BOOL)arg1 ;
-(BOOL)stacked;
-(void)setStacked:(BOOL)arg1 ;
@end

