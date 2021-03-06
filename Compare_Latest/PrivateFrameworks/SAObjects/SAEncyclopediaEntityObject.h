/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, NSURL, SAEncyclopediaEntityLink;

@interface SAEncyclopediaEntityObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSArray *propertyGroups;
@property(copy, nonatomic) NSString *nameAnnotation;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSURL *image;
@property(retain, nonatomic) SAEncyclopediaEntityLink *articleLink;
@property(copy, nonatomic) NSString *articleAbstract;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

