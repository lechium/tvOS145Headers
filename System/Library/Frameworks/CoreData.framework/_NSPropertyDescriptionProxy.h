/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPropertyDescription, NSEntityDescription;

@interface _NSPropertyDescriptionProxy : NSObject <NSCoding, NSSecureCoding> {

	id _sourceBuffer;
	NSPropertyDescription* _underlyingProperty;
	NSEntityDescription* _entityDescription;
	unsigned _entitysReferenceIDForProperty;

}
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
-(Class)class;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)entity;
-(unsigned)_entitysReferenceID;
-(id)_underlyingProperty;
-(void)_createCachesAndOptimizeState;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)_setEntity:(id)arg1 ;
-(void)_setEntityAndMaintainIndices:(id)arg1 ;
-(void)_setEntitysReferenceID:(unsigned)arg1 ;
-(id)initWithPropertyDescription:(id)arg1 ;
@end

