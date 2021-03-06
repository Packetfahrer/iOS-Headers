/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSAtomicStore.h>

@interface NSAtomicStore (_NSInternalMethods)
- (void)_registerCacheNode:(id)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)executeFetchRequest:(id)arg1 withContext:(id)arg2;
- (id)executeCountRequest:(id)arg1 withContext:(id)arg2;
- (id)executeSaveChangesRequest:(id)arg1 withContext:(id)arg2;
- (id)executeRefreshRequest:(id)arg1 withContext:(id)arg2;
- (id)_retrieveNodeForObjectID:(id)arg1;
- (id)_retrieveNodeForObject:(id)arg1;
- (void)_insertNodeIntoMainCache:(id)arg1;
- (void)_insertNodeIntoEntityCache:(id)arg1;
- (void)_deleteNodeFromMainCache:(id)arg1;
- (void)_deleteNodeFromEntityCache:(id)arg1;
- (id)_retrieveNodesSatisfyingRequest:(id)arg1;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (void)_didLoadMetadata;
- (void)_preflightCrossCheck;
- (void)_storeNextReferenceInMetadata;
- (id)_getNewIDForObject:(id)arg1;
- (void)_addObject:(id)arg1;
- (void)_removeObject:(id)arg1;
- (void)_updateObject:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (id)_retainedObjectIDForEntity:(id)arg1 referenceObject:(id)arg2;
@end

