/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface INCExtensionPlugInBundle : NSObject {

	Class _principalClass;
	NSSet* _intentsSupported;
	NSSet* _intentsRestrictedWhileLocked;

}

@property (nonatomic,readonly) Class principalClass;                                   //@synthesize principalClass=_principalClass - In the implementation block
@property (nonatomic,copy,readonly) NSSet * intentsSupported;                          //@synthesize intentsSupported=_intentsSupported - In the implementation block
@property (nonatomic,copy,readonly) NSSet * intentsRestrictedWhileLocked;              //@synthesize intentsRestrictedWhileLocked=_intentsRestrictedWhileLocked - In the implementation block
-(Class)principalClass;
-(NSSet *)intentsRestrictedWhileLocked;
-(id)initWithPrincipalClass:(Class)arg1 intentsSupported:(id)arg2 intentsRestrictedWhileLocked:(id)arg3 ;
-(NSSet *)intentsSupported;
@end

