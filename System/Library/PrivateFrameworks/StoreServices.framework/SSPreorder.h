/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString, SSItemImageCollection, NSDate;

@interface SSPreorder : NSObject <SSXPCCoding> {

	NSNumber* _accountID;
	NSString* _artistName;
	SSItemImageCollection* _imageCollection;
	unsigned long long _itemID;
	NSString* _itemKind;
	double _releaseDate;
	NSString* _releaseDateString;
	long long _pid;
	unsigned long long _preorderID;
	NSString* _title;

}

@property (nonatomic,readonly) NSString * artistName;                                   //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) SSItemImageCollection * imageCollection;                 //@synthesize imageCollection=_imageCollection - In the implementation block
@property (nonatomic,readonly) NSString * itemKind;                                     //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,readonly) long long persistentIdentifier;                          //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate; 
@property (nonatomic,readonly) NSString * releaseDateString;                            //@synthesize releaseDateString=_releaseDateString - In the implementation block
@property (nonatomic,readonly) NSNumber * storeAccountIdentifier;                       //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) unsigned long long storeItemIdentifier;                  //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) unsigned long long storePreorderIdentifier;              //@synthesize preorderID=_preorderID - In the implementation block
@property (nonatomic,readonly) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)dealloc;
-(long long)persistentIdentifier;
-(NSString *)title;
-(NSString *)artistName;
-(NSDate *)releaseDate;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)_initWithPersistentIdentifier:(long long)arg1 ;
-(NSString *)itemKind;
-(SSItemImageCollection *)imageCollection;
-(NSString *)releaseDateString;
-(id)copyReleaseDateStringWithStyle:(long long)arg1 ;
-(void)_setArtistName:(id)arg1 ;
-(void)_setImageCollection:(id)arg1 ;
-(void)_setItemKind:(id)arg1 ;
-(void)_setReleaseDate:(id)arg1 ;
-(void)_setReleaseDateString:(id)arg1 ;
-(void)_setStoreAccountIdentifier:(id)arg1 ;
-(void)_setStoreItemIdentifier:(long long)arg1 ;
-(void)_setStorePreorderIdentifier:(long long)arg1 ;
-(void)_setTitle:(id)arg1 ;
-(NSNumber *)storeAccountIdentifier;
-(unsigned long long)storeItemIdentifier;
-(unsigned long long)storePreorderIdentifier;
@end
