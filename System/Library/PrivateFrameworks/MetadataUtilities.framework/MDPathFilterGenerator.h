/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetadataUtilities.framework/MetadataUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MetadataUtilities/MetadataUtilities-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSDictionary;

@interface MDPathFilterGenerator : NSObject {

	NSMutableDictionary* _namedRoots;
	NSMutableArray* _namedRootArray;
	NSMutableDictionary* _namedRootIndexes;
	NSMutableArray* _auxValueArray;
	int _nextAuxValueIndex;
	BOOL _processExtensions;
	int _auxValueCount;
	NSMutableDictionary* _namedLinkExtensionsDictionary;
	NSDictionary* _namedLinkPrefixesDictionary;
	unsigned long long _atBundleMask;
	unsigned long long _inBundleMask;
	unsigned long long _inheritMask;
	unsigned long long _defaultRule;
	unsigned long long _defaultMask;
	unsigned long long _ignoreMask;

}
-(void)dealloc;
-(void)dump;
-(void)addNamed:(id)arg1 field:(int)arg2 value:(int)arg3 hasAuxValue:(BOOL)arg4 auxValue:(unsigned long long)arg5 forPath:(id)arg6 permitLink:(BOOL)arg7 copyParentWildcardLink:(BOOL)arg8 ;
-(void)addRules:(SCD_Struct_MD11*)arg1 withPrefix:(id)arg2 tableMapping:(id)arg3 ;
-(void)addNamed:(id)arg1 field:(int)arg2 value:(int)arg3 forPath:(id)arg4 permitLink:(BOOL)arg5 ;
-(MDPlistContainerRef)copyFilterMDPlistForMountDepth:(int)arg1 ;
-(id)initWithDefaultFieldsAndValues:(int*)arg1 ignoreFields:(int*)arg2 mappedPrefixes:(id)arg3 hiddenExtensions:(id)arg4 mappedExtensions:(id)arg5 ;
-(void)addMappedExtensions:(id)arg1 ;
-(void)setAtBundleField:(unsigned)arg1 inBundleField:(unsigned)arg2 ;
-(void)addNamed:(id)arg1 auxValue:(unsigned long long)arg2 forPath:(id)arg3 ;
-(void)addRules:(SCD_Struct_MD11*)arg1 withPrefix:(id)arg2 ;
-(id)filterDataForMountDepth:(int)arg1 ;
@end

