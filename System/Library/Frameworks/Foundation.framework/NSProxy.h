/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@class NSString;

@interface NSProxy <NSObject> {

	Class isa;

}

@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
+(void)initialize;
+(id)retain;
+(oneway void)release;
+(BOOL)allowsWeakReference;
+(BOOL)retainWeakReference;
+(id)self;
+(Class)class;
+(BOOL)isKindOfClass:(Class)arg1 ;
+(BOOL)respondsToSelector:(SEL)arg1 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)autorelease;
+(BOOL)_tryRetain;
+(BOOL)_isDeallocating;
+(unsigned long long)retainCount;
+(BOOL)isEqual:(id)arg1 ;
+(unsigned long long)hash;
+(id)copyWithZone:(NSZone*)arg1 ;
+(id)mutableCopyWithZone:(NSZone*)arg1 ;
+(id)copy;
+(Class)superclass;
+(id)description;
+(id)debugDescription;
+(id)performSelector:(SEL)arg1 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
+(BOOL)isProxy;
+(BOOL)isMemberOfClass:(Class)arg1 ;
+(BOOL)conformsToProtocol:(id)arg1 ;
+(NSZone*)zone;
+(BOOL)isSubclassOfClass:(Class)arg1 ;
+(BOOL)isAncestorOfObject:(id)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(BOOL)isFault;
+(/*function pointer*/void*)instanceMethodForSelector:(SEL)arg1 ;
+(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
+(id)forwardingTargetForSelector:(SEL)arg1 ;
+(id)init;
+(void)dealloc;
+(id)mutableCopy;
+(void)finalize;
+(id)_copyDescription;
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
-(BOOL)isFault;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)finalize;
-(BOOL)isNSDate__;
-(BOOL)isNSString__;
-(BOOL)isNSCFConstantString__;
-(BOOL)isNSNumber__;
-(id)_copyDescription;
-(BOOL)isNSArray__;
-(BOOL)isNSDictionary__;
-(BOOL)isNSData__;
-(BOOL)isNSObject__;
-(BOOL)isNSOrderedSet__;
-(BOOL)isNSSet__;
-(BOOL)isNSTimeZone__;
-(BOOL)isNSValue__;
-(BOOL)_allowsDirectEncoding;
@end

