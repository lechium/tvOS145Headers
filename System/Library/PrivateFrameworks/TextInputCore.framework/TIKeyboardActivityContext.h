/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TIKeyboardActivityContext : NSObject {

	unsigned long long _fromState;
	unsigned long long _toState;
	unsigned long long _excessMemoryInBytes;

}

@property (assign,nonatomic) unsigned long long fromState;                        //@synthesize fromState=_fromState - In the implementation block
@property (assign,nonatomic) unsigned long long toState;                          //@synthesize toState=_toState - In the implementation block
@property (assign,nonatomic) unsigned long long excessMemoryInBytes;              //@synthesize excessMemoryInBytes=_excessMemoryInBytes - In the implementation block
+(id)contextFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(unsigned long long)fromState;
-(unsigned long long)toState;
-(void)setFromState:(unsigned long long)arg1 ;
-(void)setToState:(unsigned long long)arg1 ;
-(unsigned long long)excessMemoryInBytes;
-(void)setExcessMemoryInBytes:(unsigned long long)arg1 ;
@end
