/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RUIScriptingStaticFunction : NSObject {

	int _JSPropertyAttributes;
	const char* _identifier;
	/*function pointer*/void* _function;

}

@property (assign,nonatomic) const char* identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* function;              //@synthesize function=_function - In the implementation block
@property (assign,nonatomic) int JSPropertyAttributes;                        //@synthesize JSPropertyAttributes=_JSPropertyAttributes - In the implementation block
-(id)description;
-(const char*)identifier;
-(void)setIdentifier:(const char*)arg1 ;
-(/*function pointer*/void*)function;
-(void)setFunction:(/*function pointer*/void*)arg1 ;
-(int)JSPropertyAttributes;
-(void)setJSPropertyAttributes:(int)arg1 ;
@end

