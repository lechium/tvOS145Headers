/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AddressBook/AddressBook-Structs.h>
#import <libobjc.A.dylib/ABSRecord.h>

@class ABSAddressBook, CNAccount, CNMutableContainer, NSString;

@interface ABSSource : NSObject <ABSRecord> {

	int _revertedRecordID;
	ABSAddressBook* _addressBook;
	ABSSource* _source;
	CNAccount* _account;
	CNMutableContainer* _cnImpl;

}

@property (assign,nonatomic) int revertedRecordID;                             //@synthesize revertedRecordID=_revertedRecordID - In the implementation block
@property (nonatomic,readonly) int id; 
@property (nonatomic,readonly) unsigned type; 
@property (assign,nonatomic,__weak) ABSAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
@property (assign,nonatomic,__weak) ABSSource * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * compositeName; 
@property (nonatomic,readonly) CNAccount * account;                            //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) CNMutableContainer * cnImpl;                      //@synthesize cnImpl=_cnImpl - In the implementation block
@property (nonatomic,readonly) NSString * CNIdentifierString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(unsigned long long)_cfTypeID;
-(unsigned)type;
-(ABSSource *)source;
-(void)setSource:(ABSSource *)arg1 ;
-(ABSAddressBook *)addressBook;
-(void)setAddressBook:(ABSAddressBook *)arg1 ;
-(CNAccount *)account;
-(const void*)copyValueForProperty:(int)arg1 ;
-(CNMutableContainer *)cnImpl;
-(NSString *)compositeName;
-(int)id;
-(void)setCnImpl:(CNMutableContainer *)arg1 ;
-(BOOL)setValue:(void*)arg1 forProperty:(int)arg2 withError:(_CFError*)arg3 ;
-(BOOL)removeProperty:(int)arg1 withError:(id*)arg2 ;
-(void)replaceRecordStorageWithCNObject:(id)arg1 ;
-(NSString *)CNIdentifierString;
-(int)revertedRecordID;
-(void)setRevertedRecordID:(int)arg1 ;
-(id)initWithMutableContainer:(id)arg1 ;
-(id)getAccount;
-(void)updateAllValuesWithValuesFromContainer:(id)arg1 ;
@end

