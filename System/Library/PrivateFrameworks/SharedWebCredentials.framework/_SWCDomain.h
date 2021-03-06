/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface _SWCDomain : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {

	BOOL _wildcard;
	char _modeOfOperation;
	NSString* _host;
	NSNumber* _port;

}

@property (readonly) NSString * rawValue; 
@property (readonly) NSString * host;                                        //@synthesize host=_host - In the implementation block
@property (readonly) NSNumber * port;                                        //@synthesize port=_port - In the implementation block
@property (getter=isWildcard,readonly) BOOL wildcard;                        //@synthesize wildcard=_wildcard - In the implementation block
@property (readonly) char modeOfOperation;                                   //@synthesize modeOfOperation=_modeOfOperation - In the implementation block
@property (getter=isValid,readonly) BOOL valid; 
@property (getter=isHostIPAddress,readonly) BOOL hostIPAddress; 
@property (readonly) NSString * topLevelDomainValue; 
@property (readonly) _SWCDomain * nonWildcardDomain; 
@property (readonly) _SWCDomain * wildcardDomain; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)appleDomain;
+(id)exampleDomain;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(id)redactedDescription;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)host;
-(NSNumber *)port;
-(id)initWithString:(id)arg1 ;
-(NSString *)rawValue;
-(BOOL)isWildcard;
-(char)modeOfOperation;
-(BOOL)encompassesDomain:(id)arg1 ;
-(id)initWithHost:(id)arg1 port:(id)arg2 wildcard:(BOOL)arg3 modeOfOperation:(char)arg4 ;
-(BOOL)isHostIPAddress;
-(NSString *)topLevelDomainValue;
-(_SWCDomain *)nonWildcardDomain;
-(_SWCDomain *)wildcardDomain;
-(id)domainRequiringModeOfOperation:(char)arg1 ;
@end

