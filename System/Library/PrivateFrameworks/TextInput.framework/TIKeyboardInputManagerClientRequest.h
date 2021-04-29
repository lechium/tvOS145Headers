/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSInvocation;

@interface TIKeyboardInputManagerClientRequest : NSObject {

	NSInvocation* _invocation;
	unsigned long long _errorCount;

}

@property (nonatomic,readonly) NSInvocation * invocation; 
@property (assign,nonatomic) unsigned long long errorCount;              //@synthesize errorCount=_errorCount - In the implementation block
+(id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(BOOL)arg2 ;
-(id)init;
-(id)initWithInvocation:(id)arg1 ;
-(NSInvocation *)invocation;
-(void)setErrorCount:(unsigned long long)arg1 ;
-(unsigned long long)errorCount;
@end

