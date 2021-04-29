/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSCoder.h>
#import <libobjc.A.dylib/MSVSegmentedSubEncoder.h>

@class NSData, NSMutableArray, NSMapTable, NSDictionary, NSString;

@interface MSVOPACKEncoder : NSCoder <MSVSegmentedSubEncoder> {

	BOOL _hasFinished;
	NSData* _encodedData;
	NSMutableArray* _objects;
	NSMapTable* _objectLookupTable;
	NSMutableArray* _wrapperStack;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) BOOL hasFinished;                              //@synthesize hasFinished=_hasFinished - In the implementation block
@property (nonatomic,readonly) NSMutableArray * objects;                    //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NSMapTable * objectLookupTable;              //@synthesize objectLookupTable=_objectLookupTable - In the implementation block
@property (nonatomic,readonly) NSMutableArray * wrapperStack;               //@synthesize wrapperStack=_wrapperStack - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSData * encodedData;                        //@synthesize encodedData=_encodedData - In the implementation block
@property (nonatomic,readonly) BOOL hasTopLevelData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)encodedDataWithRootObject:(id)arg1 error:(id*)arg2 ;
+(id)encodedDataWithRootObject:(id)arg1 userInfo:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(NSDictionary *)userInfo;
-(BOOL)allowsKeyedCoding;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(BOOL)requiresSecureCoding;
-(NSData *)encodedData;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeRootObject:(id)arg1 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)finishEncoding;
-(NSMutableArray *)objects;
-(id)msv_userInfo;
-(void)msv_setUserInfo:(id)arg1 ;
-(BOOL)hasFinished;
-(void)setHasFinished:(BOOL)arg1 ;
-(void)beginEncodingPartialTopLevelObject:(id)arg1 ;
-(void)finishEncodingPartialTopLevelObject;
-(BOOL)hasTopLevelData;
-(void)finishEncodingWithError:(id*)arg1 ;
-(id)encodedDataWithError:(id*)arg1 ;
-(void)_encodeNumber:(id)arg1 forKey:(id)arg2 ;
-(id)_convertNumber:(id)arg1 ;
-(id)_convertObject:(id)arg1 ;
-(NSMapTable *)objectLookupTable;
-(NSMutableArray *)wrapperStack;
@end

