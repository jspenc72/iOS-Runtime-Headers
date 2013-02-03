/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSMutableDictionary, NSSQLEntity, NSNumber;

@interface _NSSQLTableMigrationDescription : NSObject {
    NSMutableArray *_addedEntityMigrations;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_copiedEntityMigrations;
    NSNumber *_hasTransformedTableSchema;
    NSMutableDictionary *_migrationByEntity;
    NSInteger _migrationType;
    NSMutableArray *_removedEntityMigrations;
    NSMutableArray *_removedManyToManys;
    NSSQLEntity *_rootEntity;
    NSSQLEntity *_sourceRootEntity;
    NSMutableDictionary *_tempTableNames;
    NSMutableArray *_transformedEntityMigrations;
    NSMutableArray *_transformedManyToManys;
}

@property(readonly) NSSQLEntity *rootEntity;
@property(readonly) NSInteger migrationType;

- (id)_addedManyToManys;
- (BOOL)_hasTransformedTableSchema;
- (id)_removedManyToManys;
- (id)_sourceRootEntity;
- (id)_tempNameForTableName:(id)arg1;
- (id)_transformedManyToManys;
- (void)addEntityMigrationDescription:(id)arg1;
- (void)appendStatementsToCompleteMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToPerformMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToPrepareForMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createInsertStatementForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createUpdateStatementForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)dealloc;
- (id)initWithRootEntity:(id)arg1 migrationType:(NSInteger)arg2;
- (NSInteger)migrationType;
- (id)rootEntity;

@end