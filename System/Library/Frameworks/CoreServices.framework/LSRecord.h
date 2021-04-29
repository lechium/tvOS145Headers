/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/LSDetachable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>

@class NSURL, NSData;

@interface LSRecord : NSObject <LSDetachable, NSSecureCoding, NSCopying, NSDiscardableContent> {

	unordered_map<SEL *, id, std::__1::hash<SEL *>, std::__1::equal_to<SEL *>, std::__1::allocator<std::__1::pair<SEL *const, id>>>* _resolvedProperties;
	LSContext _context;
	unsigned _unitID;
	unsigned _tableID : 16;
	unsigned _discardableContentCounter : 14;
	unsigned _intentionallyInvalid : 1;
	unsigned _shared : 1;

}

@property (nonatomic,readonly) NSURL * visualizerURL; 
@property (assign,setter=_setShared:,getter=_isShared,nonatomic) BOOL _shared; 
@property (nonatomic,readonly) id compatibilityObject; 
@property (readonly) NSData * persistentIdentifier; 
+(void)initialize;
+(id)new;
+(BOOL)supportsSecureCoding;
+(BOOL)hasDatabaseAccess;
+(id)_propertyClasses;
+(void)resolveAllPropertiesOfRecords:(const id*)arg1 count:(unsigned long long)arg2 andDetachOnQueue:(id)arg3 ;
+(void)resolveAllPropertiesOfRecords:(id)arg1 andDetachOnQueue:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(id)initWithPersistentIdentifier:(id)arg1 ;
-(NSData *)persistentIdentifier;
-(void)detach;
-(id)compatibilityObject;
-(BOOL)_isShared;
-(void)_performBlockWithContext:(/*^block*/id)arg1 ;
-(void)_resolveAllProperties;
-(id)_initInvalid;
-(id)_resolvedPropertyValueForGetter:(SEL)arg1 nullPlaceholder:(id)arg2 ;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)>>>*)_resolvingMethods;
-(id)_propertyClassesForCoding;
-(void)_removeResolvedPropertyValueForGetter:(SEL)arg1 ;
-(id)_attributedDescription;
-(NSURL *)visualizerURL;
-(void)resolveAllPropertiesAndDetachOnQueue:(id)arg1 ;
-(id)_initWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 ;
-(void)_setResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2 ;
-(id)_initWithContext:(LSContext*)arg1 persistentIdentifierData:(const LSPersistentIdentifierData*)arg2 length:(unsigned long long)arg3 ;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)_resolvedPropertyValueForGetter:(SEL)arg1 ;
-(id)_replacementObjectForResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2 encoder:(id)arg3 ;
-(id)_compatibilityObjectWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(void)_setShared:(BOOL)arg1 ;
-(id)_persistentIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(void)_ifAttached:(/*^block*/id)arg1 else:(/*^block*/id)arg2 ;
@end

