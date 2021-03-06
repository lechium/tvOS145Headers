/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMXPathExpression.h>

@interface IKDOMXPathExpression : IKJSObject <IKJSDOMXPathExpression> {

	/*^block*/id _evaluatingBlock;

}

@property (nonatomic,copy) id evaluatingBlock;              //@synthesize evaluatingBlock=_evaluatingBlock - In the implementation block
-(id)evaluate:(id)arg1 :(long long)arg2 :(id)arg3 ;
-(id)evaluatingBlock;
-(id)initWithAppContext:(id)arg1 evaluatingBlock:(/*^block*/id)arg2 ;
-(void)setEvaluatingBlock:(id)arg1 ;
@end

