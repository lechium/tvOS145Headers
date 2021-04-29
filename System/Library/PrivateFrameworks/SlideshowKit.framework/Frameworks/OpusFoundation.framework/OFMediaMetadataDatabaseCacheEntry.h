/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OpusFoundation/OpusFoundation-Structs.h>
@class OFMediaMetadataDatabaseCache, NSString, NSDate;

@interface OFMediaMetadataDatabaseCacheEntry : NSObject {

	OFMediaMetadataDatabaseCache* _context;
	long long _uniqueID;
	NSString* _identifier;
	NSDate* _creationDate;
	NSString* _name;
	BOOL _isFault;
	BOOL _isDirty;

}

@property (assign) BOOL isFault;                                        //@synthesize isFault=_isFault - In the implementation block
@property (assign) BOOL isDirty;                                        //@synthesize isDirty=_isDirty - In the implementation block
@property (assign) long long uniqueID;                                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (retain) OFMediaMetadataDatabaseCache * context;              //@synthesize context=_context - In the implementation block
@property (copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSDate * creationDate;                               //@synthesize creationDate=_creationDate - In the implementation block
@property (copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(BOOL)isFault;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSDate *)creationDate;
-(void)cleanup;
-(void)setIdentifier:(NSString *)arg1 ;
-(OFMediaMetadataDatabaseCache *)context;
-(void)setContext:(OFMediaMetadataDatabaseCache *)arg1 ;
-(long long)uniqueID;
-(void)setUniqueID:(long long)arg1 ;
-(void)save;
-(BOOL)isDirty;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)update;
-(void)setIsDirty:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 andStatement:(sqlite3_stmtRef)arg2 ;
-(void)updateWithStatement:(sqlite3_stmtRef)arg1 ;
-(void)setIsFault:(BOOL)arg1 ;
@end

