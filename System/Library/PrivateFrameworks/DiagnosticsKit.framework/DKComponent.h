/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DKComponentIdentity, NSDictionary;

@interface DKComponent : NSObject <NSCopying, NSSecureCoding> {

	DKComponentIdentity* _identity;
	NSDictionary* _attributes;

}

@property (nonatomic,readonly) DKComponentIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                   //@synthesize attributes=_attributes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)componentWithIdentity:(id)arg1 attributes:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DKComponentIdentity *)identity;
-(NSDictionary *)attributes;
-(id)dictionaryForJSON;
-(id)initWithIdentity:(id)arg1 attributes:(id)arg2 ;
@end

