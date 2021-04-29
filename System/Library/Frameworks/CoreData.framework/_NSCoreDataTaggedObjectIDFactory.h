/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@interface _NSCoreDataTaggedObjectIDFactory : NSObject {

	int _cd_rc;
	unsigned _taggedPoolIndex;
	id _fallbackFactories;

}
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)alloc;
-(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)retainCount;
-(void)dealloc;
-(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
-(id)initWithPK64:(long long)arg1 ;
-(id)_storeInfo1;
-(void)_setStoreInfo1:(id)arg1 ;
-(void)setObjectStoreIdentifier:(id)arg1 ;
-(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
-(void)_storeDeallocated;
-(id)_fallbackFactory;
@end

