/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface UIWebPDFLinkAction : NSObject {

	int type;
	NSString* title;
	/*^block*/id handler;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) id handler; 
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setHandler:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)handler;
@end

