/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/swift/libswiftCore.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libswiftCore.dylib/libswiftCore.dylib-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@class NSString;

@interface Swift._SwiftObject : _UKNOWN_SUPERCLASS_ <NSObject> {

	Class isa;
	RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> refCounts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)retain;
+(void)release;
+(BOOL)allowsWeakReference;
+(BOOL)retainWeakReference;
+(Class)class;
+(BOOL)respondsToSelector:(SEL)arg1 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)autorelease;
+(BOOL)_tryRetain;
+(BOOL)_isDeallocating;
+(unsigned long long)retainCount;
+(Class)superclass;
+(id)description;
+(id)debugDescription;
+(BOOL)isMemberOfClass:(Class)arg1 ;
+(BOOL)conformsToProtocol:(id)arg1 ;
+(BOOL)isSubclassOfClass:(Class)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(/*function pointer*/void*)instanceMethodForSelector:(SEL)arg1 ;
+(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(id)retain;
-(oneway void)release;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(id)self;
-(Class)class;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)autorelease;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)_noteAssociatedObjects;
-(Class)superclass;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)performSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(BOOL)isProxy;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(NSZone*)zone;
-(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)_setWeaklyReferenced;
-(BOOL)isNSDate__;
-(BOOL)isNSString__;
-(BOOL)isNSCFConstantString__;
-(BOOL)isNSNumber__;
-(unsigned long long)_cfTypeID;
-(id)_copyDescription;
-(BOOL)isNSArray__;
-(BOOL)isNSDictionary__;
-(BOOL)isNSData__;
-(BOOL)isNSObject__;
-(BOOL)isNSOrderedSet__;
-(BOOL)isNSSet__;
-(BOOL)isNSTimeZone__;
-(BOOL)isNSValue__;
@end

