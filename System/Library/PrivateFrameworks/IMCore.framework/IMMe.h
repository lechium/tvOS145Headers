/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNContact, NSString, NSArray, NSMutableArray, IMHandle;

@interface IMMe : NSObject {

	CNContact* _cnContact;
	NSString* _cnNickname;
	NSString* _cnFirstName;
	NSString* _cnFullName;
	NSString* _cnLastName;
	NSArray* _cnEmails;
	NSMutableArray* _cnIMHandles;
	NSMutableArray* _loginIMHandles;

}

@property (nonatomic,readonly) NSString * guid; 
@property (nonatomic,readonly) CNContact * cnContact;                //@synthesize cnContact=_cnContact - In the implementation block
@property (nonatomic,readonly) NSString * nickname; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * email; 
@property (nonatomic,readonly) NSArray * emails; 
@property (nonatomic,readonly) IMHandle * bestIMHandle; 
@property (nonatomic,readonly) NSArray * imHandles; 
+(id)me;
+(id)fallbackUserName;
+(id)firstNameFromFallbackUserName;
+(id)lastNameFromFallbackUserName;
+(id)imHandleForService:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)nickname;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)email;
-(NSString *)guid;
-(NSString *)fullName;
-(NSArray *)emails;
-(CNContact *)cnContact;
-(BOOL)removeLoginIMHandle:(id)arg1 ;
-(BOOL)addLoginIMHandle:(id)arg1 ;
-(BOOL)removeIMHandle:(id)arg1 ;
-(BOOL)addIMHandle:(id)arg1 ;
-(void)myPictureChanged;
-(void)rebuildIMHandles;
-(void)setCNContact:(id)arg1 ;
-(NSArray *)imHandles;
-(id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2 ;
-(void)resetABPerson;
-(id)loginIMHandles;
-(BOOL)isIMHandleLoginIMHandle:(id)arg1 ;
-(IMHandle *)bestIMHandle;
@end

