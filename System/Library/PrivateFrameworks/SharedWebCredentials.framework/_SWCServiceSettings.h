/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, _SWCServiceSpecifier, _SWCGeneration, NSDictionary;

@interface _SWCServiceSettings : NSObject <SWCRedactedDescription, NSSecureCoding> {

	NSMutableDictionary* _dict;
	unsigned _hasChanges : 1;
	_SWCServiceSpecifier* _serviceSpecifier;
	_SWCGeneration* _generation;

}

@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) _SWCGeneration * generation;                          //@synthesize generation=_generation - In the implementation block
@property (readonly) _SWCServiceSpecifier * serviceSpecifier;              //@synthesize serviceSpecifier=_serviceSpecifier - In the implementation block
@property (readonly) BOOL hasChanges; 
+(BOOL)supportsSecureCoding;
+(id)notificationCenter;
+(void)serviceSettingsDidChange:(id)arg1 ;
+(id)serviceSettingsWithServiceSpecifier:(id)arg1 error:(id*)arg2 ;
+(void)postChangeNotificationForServiceSpecifier:(id)arg1 ;
+(BOOL)removeObjectsForKeys:(id)arg1 serviceType:(id)arg2 error:(id*)arg3 ;
+(BOOL)removeObjectsForKeys:(id)arg1 serviceSpecifier:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(id)debugDescription;
-(id)redactedDescription;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)hasChanges;
-(_SWCGeneration *)generation;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(_SWCServiceSpecifier *)serviceSpecifier;
-(id)_initWithServiceSpecifier:(id)arg1 dictionary:(id)arg2 generation:(id)arg3 ;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(BOOL)commitReturningError:(id*)arg1 ;
@end

