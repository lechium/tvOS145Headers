/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIViewVisitor.h>

@interface _UIViewBlockVisitor : _UIViewVisitor {

	/*^block*/id _visitorBlock;

}

@property (nonatomic,copy) id visitorBlock;              //@synthesize visitorBlock=_visitorBlock - In the implementation block
-(void)dealloc;
-(id)initWithTraversalDirection:(unsigned long long)arg1 visitorBlock:(/*^block*/id)arg2 ;
-(BOOL)_visitView:(id)arg1 ;
-(void)setVisitorBlock:(id)arg1 ;
-(id)visitorBlock;
@end
