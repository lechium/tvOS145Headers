/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFKeyAttributes.h>

@class _SFKeySpecifier, NSString;

@interface _SFAsymmetricKeyAttributes : NSObject <_SFKeyAttributes> {

	_SFKeySpecifier* _asymmetricKeySpecifier;
	NSString* _asymmetricKeyDomain;

}

@property (nonatomic,copy,readonly) _SFKeySpecifier * keySpecifier;              //@synthesize asymmetricKeySpecifier=_asymmetricKeySpecifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyDomain;                        //@synthesize asymmetricKeyDomain=_asymmetricKeyDomain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(_SFKeySpecifier *)keySpecifier;
-(NSString *)keyDomain;
-(id)initWithSpecifier:(id)arg1 domain:(id)arg2 ;
@end

