/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class SADomainObject, NSString;

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand>

@property (nonatomic,retain) SADomainObject * addFields; 
@property (nonatomic,retain) SADomainObject * identifier; 
@property (nonatomic,retain) SADomainObject * removeFields; 
@property (nonatomic,retain) SADomainObject * setFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domainObjectUpdate;
+(id)domainObjectUpdateWithDictionary:(id)arg1 context:(id)arg2 ;
-(SADomainObject *)identifier;
-(void)setIdentifier:(SADomainObject *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SADomainObject *)addFields;
-(void)setAddFields:(SADomainObject *)arg1 ;
-(SADomainObject *)removeFields;
-(void)setRemoveFields:(SADomainObject *)arg1 ;
-(SADomainObject *)setFields;
-(void)setSetFields:(SADomainObject *)arg1 ;
@end

